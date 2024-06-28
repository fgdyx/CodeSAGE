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
 VAR2 = (int *)malloc(100*sizeof(int));
 break;
 }
 {
 int VAR3[100] = {0};
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN3(VAR2[0]);
 free(VAR2);
 }
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (int *)malloc(100*sizeof(int));
 break;
 default:
 FUN2("");
 break;
 }
 {
 int VAR3[100] = {0};
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN3(VAR2[0]);
 free(VAR2);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
