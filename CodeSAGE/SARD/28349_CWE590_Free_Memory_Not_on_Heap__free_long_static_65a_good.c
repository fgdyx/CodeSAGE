#ifndef VAR1
void FUN1(long * VAR2);
static void FUN2()
{
 long * VAR2;
 void (*VAR3) (long *) = VAR4;
 VAR2 = NULL;
 {
 long * VAR5 = (long *)malloc(100*sizeof(long));
 if (VAR5 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5L;
 }
 }
 VAR2 = VAR5;
 }
 FUN5(VAR2);
}
void FUN6()
{
 FUN2();
}
#endif
