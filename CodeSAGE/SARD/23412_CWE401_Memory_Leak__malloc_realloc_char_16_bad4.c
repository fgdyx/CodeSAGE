#ifndef VAR1
void FUN1()
{
 while(1)
 {
 {
 char * VAR2 = (char *)malloc(100*sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 /* FLAW: If realloc() fails, the initial memory block will not be freed() */
 VAR2 = (char *)realloc(VAR2, (130000)*sizeof(char));
 if (VAR2 != NULL)
 {
 strcpy(VAR2, "");
 FUN2(VAR2);
 free(VAR2);
 }
 }
 break;
 }
}
#endif
