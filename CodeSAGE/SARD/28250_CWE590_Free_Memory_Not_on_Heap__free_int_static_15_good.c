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
 {
 int * VAR3 = (int *)malloc(100*sizeof(int));
 if (VAR3 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5;
 }
 }
 VAR2 = VAR3;
 }
 break;
 }
 FUN4(VAR2[0]);
 free(VAR2);
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 {
 int * VAR3 = (int *)malloc(100*sizeof(int));
 if (VAR3 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5;
 }
 }
 VAR2 = VAR3;
 }
 break;
 default:
 FUN2("");
 break;
 }
 FUN4(VAR2[0]);
 free(VAR2);
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
