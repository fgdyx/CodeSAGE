#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 int64_t VAR4[50];
 int64_t VAR5[100];
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR3 = VAR5;
 break;
 }
 {
 int64_t VAR6[100] = {0};
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR3[VAR7] = VAR6[VAR7];
 }
 FUN3(VAR3[0]);
 }
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 int64_t VAR4[50];
 int64_t VAR5[100];
 switch(6)
 {
 case 6:
 VAR3 = VAR5;
 break;
 default:
 FUN2("");
 break;
 }
 {
 int64_t VAR6[100] = {0};
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR3[VAR7] = VAR6[VAR7];
 }
 FUN3(VAR3[0]);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
