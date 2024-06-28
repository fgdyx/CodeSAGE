#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 {
 VAR3 * VAR5 = new VAR3[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6].VAR7 = 1;
 VAR5[VAR6].VAR8 = 1;
 }
 }
 VAR4 = VAR5;
 }
 FUN1(&VAR4);
}
void FUN3()
{
 FUN2();
}
#endif
