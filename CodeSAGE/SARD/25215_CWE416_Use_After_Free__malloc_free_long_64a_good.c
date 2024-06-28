#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 long * VAR3;
 VAR3 = NULL;
 VAR3 = (long *)malloc(100*sizeof(long));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5L;
 }
 }
 FUN1(&VAR3);
}
void FUN3(void * VAR2);
static void FUN4()
{
 long * VAR3;
 VAR3 = NULL;
 VAR3 = (long *)malloc(100*sizeof(long));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5L;
 }
 }
 free(VAR3);
 FUN3(&VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
