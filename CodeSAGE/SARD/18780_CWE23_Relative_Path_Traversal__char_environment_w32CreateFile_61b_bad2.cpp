#ifndef VAR1
char * FUN1(char * VAR2)
{
 {
 size_t VAR3 = strlen(VAR2);
 char * VAR4 = FUN2(VAR5);
 if (VAR4 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR3, VAR4, VAR6-VAR3-1);
 }
 }
 return VAR2;
}
#endif
