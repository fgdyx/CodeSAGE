#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 {
 int * VAR3 = new int[100];
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5;
 }
 }
 VAR2 = VAR3;
 }
 VAR5* VAR6 = new VAR7;
 VAR6->FUN2(VAR2);
 delete VAR6;
}
void FUN3()
{
 FUN1();
}
#endif
