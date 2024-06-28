#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 {
 VAR2 * VAR5 = (VAR2 *)malloc(100*sizeof(VAR2));
 if (VAR5 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6].VAR7 = 1;
 VAR5[VAR6].VAR8 = 1;
 }
 }
 VAR3 = VAR5;
 }
 FUN4(&VAR3[0]);
 free(VAR3);
}
void FUN5()
{
 FUN1();
}
#endif
