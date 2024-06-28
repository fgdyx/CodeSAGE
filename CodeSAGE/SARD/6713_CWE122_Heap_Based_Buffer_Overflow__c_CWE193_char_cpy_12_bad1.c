#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = (char *)malloc(10*sizeof(char));
 }
 else
 {
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 }
 {
 char VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strcpy(VAR2, VAR3);
 FUN3(VAR2);
 free(VAR2);
 }
}
#endif
