#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 structType VAR2;
 VAR4 = NULL;
 {
 VAR3 * VAR5 = new VAR3[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5LL;
 }
 }
 VAR4 = VAR5;
 }
 VAR2.VAR7 = VAR4;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
