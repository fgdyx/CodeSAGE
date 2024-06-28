#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 VAR5 *VAR6 = NULL;
 VAR6 = FUN2(VAR4, "");
 if (VAR6 != NULL)
 {
 fclose(VAR6);
 }
 }
}
#endif
