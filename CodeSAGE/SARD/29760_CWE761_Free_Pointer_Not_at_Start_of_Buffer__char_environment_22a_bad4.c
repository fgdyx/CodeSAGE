#ifndef VAR1
int VAR2 = 0;
void FUN1(char * VAR3);
void FUN2()
{
 char * VAR3;
 VAR3 = (char *)malloc(100*sizeof(char));
 VAR3[0] = '';
 {
 size_t VAR4 = strlen(VAR3);
 char * VAR5 = FUN3(VAR6);
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR3+VAR4, VAR5, 100-VAR4-1);
 }
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
