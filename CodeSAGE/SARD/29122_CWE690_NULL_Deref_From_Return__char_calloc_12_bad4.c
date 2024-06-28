#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (char *)calloc(20, sizeof(char));
 if(FUN2())
 {
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 strcpy(VAR2, "");
 FUN3(VAR2);
 free(VAR2);
 }
 else
 {
 if (VAR2 != NULL)
 {
 strcpy(VAR2, "");
 FUN3(VAR2);
 free(VAR2);
 }
 }
}
#endif
