#ifndef VAR1
extern int VAR2;
char * FUN1(char * VAR3)
{
 if(VAR2)
 {
 {
 size_t VAR4 = strlen(VAR3);
 char * VAR5 = FUN2(VAR6);
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR3+VAR4, VAR5, VAR7-VAR4-1);
 }
 }
 }
 return VAR3;
}
#endif
