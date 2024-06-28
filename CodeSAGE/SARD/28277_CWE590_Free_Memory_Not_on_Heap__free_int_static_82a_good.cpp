#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 {
 int * VAR3 = (int *)malloc(100*sizeof(int));
 if (VAR3 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
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
 VAR6->FUN4(VAR2);
 delete VAR6;
}
void FUN5()
{
 FUN1();
}
#endif
