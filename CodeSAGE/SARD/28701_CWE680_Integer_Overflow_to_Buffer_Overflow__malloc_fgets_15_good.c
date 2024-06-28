#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = 20;
 break;
 }
 {
 size_t VAR3;
 int *VAR4;
 VAR4 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR3 = 0; VAR3 < (VAR5)VAR2; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 FUN3(VAR4[0]);
 free(VAR4);
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 VAR2 = 20;
 break;
 default:
 FUN2("");
 break;
 }
 {
 size_t VAR3;
 int *VAR4;
 VAR4 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR3 = 0; VAR3 < (VAR5)VAR2; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 FUN3(VAR4[0]);
 free(VAR4);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
