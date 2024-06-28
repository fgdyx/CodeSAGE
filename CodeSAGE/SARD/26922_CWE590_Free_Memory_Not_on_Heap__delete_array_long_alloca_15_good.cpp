#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 long * VAR3 = new long[100];
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5L;
 }
 }
 VAR2 = VAR3;
 }
 break;
 }
 FUN3(VAR2[0]);
 delete [] VAR2;
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 {
 long * VAR3 = new long[100];
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5L;
 }
 }
 VAR2 = VAR3;
 }
 break;
 default:
 FUN2("");
 break;
 }
 FUN3(VAR2[0]);
 delete [] VAR2;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
