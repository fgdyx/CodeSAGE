#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)calloc(1, sizeof(int));
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 if (VAR2 != NULL)
 {
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 free(VAR2);
 }
 break;
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)calloc(1, sizeof(int));
 switch(6)
 {
 case 6:
 if (VAR2 != NULL)
 {
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 free(VAR2);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
