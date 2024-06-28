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
 VAR3 = new VAR2[100];
 break;
 }
 {
 int64_t VAR4[100] = {0};
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN3(VAR3[0]);
 delete [] VAR3;
 }
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 VAR3 = new VAR2[100];
 break;
 default:
 FUN2("");
 break;
 }
 {
 int64_t VAR4[100] = {0};
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN3(VAR3[0]);
 delete [] VAR3;
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
