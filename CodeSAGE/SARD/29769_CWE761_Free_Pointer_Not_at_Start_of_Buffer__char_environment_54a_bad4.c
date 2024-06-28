#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 {
 size_t VAR3 = strlen(VAR2);
 char * VAR4 = FUN3(VAR5);
 if (VAR4 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR3, VAR4, 100-VAR3-1);
 }
 }
 FUN1(VAR2);
}
#endif
