#ifndef VAR1
static void FUN1()
{
 while(1)
 {
 {
 char * VAR2 = (char *)malloc(100*sizeof(char));
 char * VAR3;
 strcpy(VAR2, "");
 FUN2(VAR2);
 VAR3 = (char *)realloc(VAR2, (130000)*sizeof(char));
 if (VAR3 != NULL)
 {
 VAR2 = VAR3;
 strcpy(VAR2, "");
 FUN2(VAR2);
 }
 free(VAR2);
 }
 break;
 }
}
void FUN3()
{
 FUN1();
}
#endif
