#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = new VAR3[100];
 }
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
 memmove(VAR4, VAR5, 100*sizeof(VAR3));
 FUN2(VAR4[0].VAR7);
 delete [] VAR4;
 }
}
void FUN3()
{
 FUN1();
}
#endif
