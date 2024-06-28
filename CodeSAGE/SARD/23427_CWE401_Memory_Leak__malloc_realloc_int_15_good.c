#ifndef VAR1
static void FUN1()
{
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 int * VAR2 = (int *)malloc(100*sizeof(int));
 int * VAR3;
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 VAR3 = (int *)realloc(VAR2, (130000)*sizeof(int));
 if (VAR3 != NULL)
 {
 VAR2 = VAR3;
 VAR2[0] = 10;
 FUN3(VAR2[0]);
 }
 free(VAR2);
 }
 break;
 }
}
static void FUN4()
{
 switch(6)
 {
 case 6:
 {
 int * VAR2 = (int *)malloc(100*sizeof(int));
 int * VAR3;
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 VAR3 = (int *)realloc(VAR2, (130000)*sizeof(int));
 if (VAR3 != NULL)
 {
 VAR2 = VAR3;
 VAR2[0] = 10;
 FUN3(VAR2[0]);
 }
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
