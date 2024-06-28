#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 VAR4 = (char *)malloc(100*sizeof(char));
 VAR4[0] = '';
 {
 size_t VAR5 = strlen(VAR4);
 char * VAR6 = FUN3(VAR7);
 if (VAR6 != NULL)
 {
 strncat(VAR4+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
