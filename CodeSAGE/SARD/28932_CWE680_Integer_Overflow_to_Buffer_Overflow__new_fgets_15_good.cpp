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
 size_t VAR3,VAR4;
 int *VAR5;
 VAR3 = VAR2 * sizeof(int);
 VAR5 = (int*)new char[VAR3];
 for (VAR4 = 0; VAR4 < (VAR6)VAR2; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 FUN3(VAR5[0]);
 delete [] VAR5;
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
 size_t VAR3,VAR4;
 int *VAR5;
 VAR3 = VAR2 * sizeof(int);
 VAR5 = (int*)new char[VAR3];
 for (VAR4 = 0; VAR4 < (VAR6)VAR2; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 FUN3(VAR5[0]);
 delete [] VAR5;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
