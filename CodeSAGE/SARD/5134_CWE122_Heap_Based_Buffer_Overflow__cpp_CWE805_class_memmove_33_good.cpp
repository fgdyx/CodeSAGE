#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 {
 VAR2 * VAR3 = VAR4;
 {
 TwoIntsClass VAR5[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6].VAR7 = 0;
 VAR5[VAR6].VAR8 = 0;
 }
 }
 memmove(VAR3, VAR5, 100*sizeof(VAR2));
 FUN2(VAR3[0].VAR7);
 delete [] VAR3;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
