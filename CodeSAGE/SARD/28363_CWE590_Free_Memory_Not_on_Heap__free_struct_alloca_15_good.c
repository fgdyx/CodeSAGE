#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 VAR2 * VAR4 = (VAR2 *)malloc(100*sizeof(VAR2));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5].VAR6 = 1;
 VAR4[VAR5].VAR7 = 1;
 }
 }
 VAR3 = VAR4;
 }
 break;
 }
 FUN4(&VAR3[0]);
 free(VAR3);
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 {
 VAR2 * VAR4 = (VAR2 *)malloc(100*sizeof(VAR2));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5].VAR6 = 1;
 VAR4[VAR5].VAR7 = 1;
 }
 }
 VAR3 = VAR4;
 }
 break;
 default:
 FUN2("");
 break;
 }
 FUN4(&VAR3[0]);
 free(VAR3);
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
