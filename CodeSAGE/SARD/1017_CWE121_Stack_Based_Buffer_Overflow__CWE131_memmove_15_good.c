#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = (int *)FUN3(10*sizeof(int));
 break;
 }
 {
 int VAR3[10] = {0};
 memmove(VAR2, VAR3, 10*sizeof(int));
 FUN4(VAR2[0]);
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (int *)FUN3(10*sizeof(int));
 break;
 default:
 FUN2("");
 break;
 }
 {
 int VAR3[10] = {0};
 memmove(VAR2, VAR3, 10*sizeof(int));
 FUN4(VAR2[0]);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
