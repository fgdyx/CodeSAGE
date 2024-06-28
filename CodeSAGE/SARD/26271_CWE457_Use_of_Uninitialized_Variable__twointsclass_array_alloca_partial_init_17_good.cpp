#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 VAR4 * VAR5;
 VAR5 = reinterpret_cast<VAR4 *>(FUN2(10*sizeof(VAR4)));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 for(int VAR2=0; VAR2<(10/2); VAR2++)
 {
 VAR5[VAR2].VAR6 = VAR2;
 VAR5[VAR2].VAR7 = VAR2;
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 for(int VAR2=0; VAR2<10; VAR2++)
 {
 VAR5[VAR2].VAR6 = VAR2;
 VAR5[VAR2].VAR7 = VAR2;
 }
 for(int VAR2=0; VAR2<10; VAR2++)
 {
 FUN3(VAR5[VAR2].VAR6);
 FUN3(VAR5[VAR2].VAR7);
 }
 }
}
static void FUN4()
{
 int VAR8,VAR9;
 VAR4 * VAR5;
 VAR5 = reinterpret_cast<VAR4 *>(FUN2(10*sizeof(VAR4)));
 for(VAR8 = 0; VAR8 < 1; VAR8++)
 {
 for(int VAR2=0; VAR2<10; VAR2++)
 {
 VAR5[VAR2].VAR6 = VAR2;
 VAR5[VAR2].VAR7 = VAR2;
 }
 }
 for(VAR9 = 0; VAR9 < 1; VAR9++)
 {
 for(int VAR2=0; VAR2<10; VAR2++)
 {
 FUN3(VAR5[VAR2].VAR6);
 FUN3(VAR5[VAR2].VAR7);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
