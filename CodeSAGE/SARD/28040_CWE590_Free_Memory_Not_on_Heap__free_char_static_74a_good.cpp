#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 VAR4 = NULL;
 {
 char * VAR5 = (char *)malloc(100*sizeof(char));
 if (VAR5 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR4 = VAR5;
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN5()
{
 FUN2();
}
#endif
