#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 size_t VAR3;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 for (VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR4[VAR3] = VAR2[VAR3];
 }
 VAR4[100-1] = '';
 FUN2(VAR4);
 }
}
static void FUN3()
{
 char * VAR2;
 void (*VAR5) (char *) = VAR6;
 VAR2 = NULL;
 {
 char * VAR7 = (char *)malloc(100*sizeof(char));
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 VAR2 = VAR7;
 }
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
