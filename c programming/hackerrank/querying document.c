char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {

}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) { 

}

char*** kth_paragraph(char**** document, int k) {

}

char**** get_document(char* text) {
   char**** doc;
   int counter_paragraph=0;
   for(int i;;i++)
   {
       if((text[i]=='\n') || (text[i]==EOF))
       {
       counter_paragraph++;
       if(text[i]==EOF)
        break;
       }
   }
   doc=calloc(counter_paragraph,sizeof(char***));
   
   int counter_sentence=0;
   for(int i=0;;i++)
   {
       if(text[i]=='.')
       counter_sentence++;
       else if(text[i]==EOF)
       break;
   }
   *doc=calloc(counter_sentence, sizeof(char**));
   
   int counter_words=0;
   for(int i=0;;i++)
   {
       if((text[i]==' ') || (text[i]=='.'))
       counter_words++;
       else if(text[i]==EOF)
       break;
   }
   **doc=calloc(counter_words,sizeof(char*));
   
   for(int i=0;;i++)
   {
       ***(doc+i)=(text+i);
   } 

}
