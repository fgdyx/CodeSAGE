#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 {
 twoIntsStruct VAR4[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5].VAR6 = 0;
 VAR4[VAR5].VAR7 = 0;
 }
 }
 memmove(VAR3, VAR4, 100*sizeof(VAR2));
 FUN2(&VAR3[0]);
 free(VAR3);
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 void (*VAR8) (VAR2 *) = VAR9;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 FUN4(VAR3);
}
void FUN5()
{
 FUN3();
}
#endif
