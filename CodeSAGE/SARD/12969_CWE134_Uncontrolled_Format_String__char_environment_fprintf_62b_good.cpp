#ifndef VAR1
void FUN1(char * &VAR2)
{
 strcpy(VAR2, "");
}
void FUN2(char * &VAR2)
{
 {
 size_t VAR3 = strlen(VAR2);
 char * VAR4 = FUN3(VAR5);
 if (VAR4 != NULL)
 {
 strncat(VAR2+VAR3, VAR4, 100-VAR3-1);
 }
 }
}
#endif
