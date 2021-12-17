/* Full Name:       Sameer Sikka
 * Student Number:  1169800
 * Date:            20/05/2021 - 22/05/2021
 */

// Include libraries 
#include<stdio.h>
#include<stdlib.h>


// Constants
#define WORD_LENGTH 23      // 22 lowercase english letters + null 
#define POS_LENGTH 25       // (5 POS tags * 4 letters each) + 4 spaces + null
#define FORM_LENGTH 105     // (4 forms * 25 letters each) + 4 form numbers + null
#define FORM_NUM 4          // 4 forms
#define NO_OF_WORDS 100     // upto 100 unique words
#define SENTENCE_LENGTH 26  // upto 25 characters per word + null
#define EOD_LENGTH 12       // Asterisks at End of Dictionary
#define INIT 0


// Struct designed to hold one word and its specifications
struct string{
    char words[WORD_LENGTH], POS[POS_LENGTH], forms[FORM_LENGTH];
};

// Linked List (queue) including string and self-referential pointer
struct QUEUE{
    char text[SENTENCE_LENGTH];   
    int index;
    struct QUEUE *next;
}; 


// Global Variables and Pointers
int num_words=INIT, num_forms=INIT;
struct QUEUE *front = NULL, *rear = NULL;
struct string word[NO_OF_WORDS];        //Array of upto 100 words declared 


// User-Defined Function Prototypes divided into stages
void heading(int);
int calculate_forms(char forms[FORM_LENGTH]);
void input(char text[], int text_length);
void deallocate();
void queue_add();
int bin_search(char text[]);
int compare(char text1[], char text2[]);
int compare_forms(int index, char text[]);

int stage1_input(int);
void stage1_output(int);
void stage2();
void stage3();
void stage4();


/* Main Function - Reads a Dictionary and ... */
int main(){
    
// Stage 1 - Reading One Word 
    stage1_input(INIT);
    stage1_output(INIT);        
    
// Stage 2 - Reading Entire Dictionary
    stage2();
    
// Stage 3 - Reading Sentence and POS tagging
    stage3();
    
// Stage 4 - Stemming Words
    stage4();
    
// Deallocates memeory dynamically allocated
    deallocate();
}


/* Deallocates Memory used in queue */
void deallocate(){
    for(struct QUEUE *temp = front; front!=NULL; temp = front){
        if(front == rear)
            rear = NULL;
        front = front->next;
        free(temp);
    }
}
        

/* Outputs Header for Stage given as parameter */
void heading(int stage){
    for(int i=0; i<26; i++)
        printf("=");
    printf("Stage %d", stage);
    for(int i=0; i<26; i++)
        printf("=");
    printf("\n");
}


/* Calculates number of forms for word passed as parameter */
int calculate_forms(char forms[FORM_LENGTH]){
    int count = 0;
    for(int i=0; i< FORM_LENGTH; i++)
        if(forms[i] >= '0' && forms[i] <= '3')
            count++;
    return count;
}


/* Inputs text ending at new-line character */
void input(char text[], int text_length){
    for(int i=0; i<text_length; i++){
        text[i] = getchar();
        
        // Converts New-Line to Null Character and stops
        if(text[i] == '\n'){
            text[i] = '\0';
            break;
        }
        
        // Ignores $ and # 
        if(text[i] == '$' || text[i] == '#')
            i--;
    }   
}


/* Add New word to queue */
void queue_add(){
    
    // Pointer *temp is dynamically alocated memory 
    struct QUEUE *temp = (struct QUEUE *)malloc(sizeof(struct QUEUE));
    
    if(front == NULL)
        front = temp;         // For new queue, last word is first word
    else
        rear->next = temp;    // Last word (if it exists) connected to new word
    rear = temp;              // New word is now the Last word
    
    // Initialisation
    temp->next = NULL;        
    temp->index = -1;
    temp->text[0] = 's';
}


/* Binary Search */
int bin_search(char text[]){
    int first = INIT, last = num_words-1; 
    while(first<=last){
        int mid = (first+last)/2;
        if(compare(word[mid].words, text)==0){
            printf("%s\n", word[mid].POS);
            return mid;
        }
        if(compare(word[mid].words, text))
            last = mid-1;
        else
            first = mid+1;
    }
    return -1;
}


/* Compares 2 strings:
   Returns 0 for Equal, -1 for text1>text2, 1 for text1<text2 */
int compare(char text1[], char text2[]){
    for(int i=0; ; i++){
        if(text1[i]=='\0' && text2[i]=='\0')
            return 0;
        if(text2[i]=='\0' || text1[i] > text2[i])
            return -1;
        if(text1[i]=='\0' || text1[i] < text2[i])
            return 1;
    }
}


/* Inputs 1 Dictionary Word into pointer *word taken as parameter */
int stage1_input(int index){
  
    // Inputting 3 lines of usable text
    if(getchar() == '$'){
        input(word[index].words, WORD_LENGTH);
        input(word[index].POS,   POS_LENGTH);
        input(word[index].forms, FORM_LENGTH);
        return 1;
    }
    
    // Returns 0 to signify end of dictionary
    return 0;
}


/* Outputs Stage 1 Results in Desired Format */
void stage1_output(int index){
    
    // Header for Stage 1
    heading(1);
    
    printf("Word %d: %s\n", index, word[index].words);
    printf("POS: %s\n", word[index].POS);
    printf("Form: %s\n", word[index].forms);
}  


/* Inputs Entire Dictionary and Outputs Results in Desired Format*/
void stage2(){
    
    // Inputting Dictionary word by word
    for(int check=1; num_words<NO_OF_WORDS && check;){
        num_forms += calculate_forms(word[num_words].forms);
        num_words++;
        check = stage1_input(num_words);
    }
    
    // Input '*' End of Dictionary
    char EOD[EOD_LENGTH];
    scanf("%s\n", EOD);
    printf("%s", EOD);
    
    // Output in Desired Format
    heading(2);   
    
    float average = num_forms / num_words;
    printf("Number of words: %d\n", num_words);
    printf("Average number of variation forms per word: %.2f\n", average);
}


/* Inputs Sentence */
void stage3(){
    
    int check = 1;
    while(check){
        char temp = getchar();
        if(!(temp>='a' && temp<='z'))
            break;  
        
        queue_add();
        rear->text[INIT] = temp; 
        
        // Inputs sentence upto '\n' or ' '
        for(int i=1; i<SENTENCE_LENGTH; i++){
            rear->text[i] = getchar();
            
            // Converts New-Line to Null Character and stops
            if(rear->text[i] == '\n')
                check = 0;
            if(!(rear->text[i]>='a' && rear->text[i]<='z')){
                rear->text[i] = '\0';
                break;
            }    
        }
    }
    
    // Header for Stage 3
    heading(3);
    
    // Temp pointer to traverse queue
    struct QUEUE *temp = front;
    
    while(temp != NULL){
        printf("%-26s", temp->text);
        temp->index = bin_search(temp->text);
        if(temp->index == -1)
            printf("NOT_FOUND\n");
        temp = temp->next;
    }
}


/* Stems Words */
void stage4(){
    
    // Header for Stage 4
    heading(4);    
    
    // Temp pointer to traverse queue
    struct QUEUE *temp = front;
    
    while(temp != NULL){
        printf("%-26s", temp->text);
        
        int check=0;
        if(temp->index != -1)
            check = compare_forms(temp->index, temp->text);
        else
            for(temp->index=0; temp->index<=num_words && !check; temp->index++)
                check = compare_forms(temp->index, temp->text);
        if(check == 0){
            printf("%-26s", temp->text);
            printf("NOT_FOUND\n");
        } 
        temp = temp->next;
    }
}

int compare_forms(int index, char text[]){
    
        // Comparing all forms with text
        int check=0;
        char new, forms[FORM_NUM][SENTENCE_LENGTH];
        for(int i=0, j=0, k=1; j<FORM_LENGTH || new == '\0'; j++, k++){
            new = word[index].forms[k];
            if(!(new >= '0' && new <= '3'))
                forms[i][j] = new;
            else{
                forms[i][j] = '\0';
                i++;
                j=0;
            }
        }
            
        for(int i=0; i<FORM_NUM; i++)
            if(compare(forms[i], text) == 0){
                printf("%-26s", word[index].words);
                printf("%s\n", word[index].POS);
                check = 1;
                break;
            }
    return check;
}