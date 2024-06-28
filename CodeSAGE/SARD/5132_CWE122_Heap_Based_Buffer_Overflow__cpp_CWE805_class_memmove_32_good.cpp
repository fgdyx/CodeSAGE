#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 VAR3 = new VAR2[100];
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 {
 TwoIntsClass VAR6[100];
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR6[VAR7].VAR8 = 0;
 VAR6[VAR7].VAR9 = 0;
 }
 }
 memmove(VAR3, VAR6, 100*sizeof(VAR2));
 FUN2(VAR3[0].VAR8);
 delete [] VAR3;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
