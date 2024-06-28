#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(5==5)
 {
 {
 size_t VAR4 = strlen(VAR2);
 char * VAR5 = FUN2(VAR6);
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 }
 if(5==5)
 {
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fprintf(VAR7, VAR2);
 }
}
#endif
