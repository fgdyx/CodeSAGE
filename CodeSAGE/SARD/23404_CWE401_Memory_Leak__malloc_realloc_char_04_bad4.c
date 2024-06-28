#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
 strcpy(VAR3, "");
 FUN2(VAR3);
 /* FLAW: If realloc() fails, the initial memory block will not be freed() */
 VAR3 = (char *)realloc(VAR3, (130000)*sizeof(char));
 if (VAR3 != NULL)
 {
 strcpy(VAR3, "");
 FUN2(VAR3);
 free(VAR3);
 }
 }
 }
}
#endif
