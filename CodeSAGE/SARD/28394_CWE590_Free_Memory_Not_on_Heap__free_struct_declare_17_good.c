#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 VAR3 * VAR5 = (VAR3 *)malloc(100*sizeof(VAR3));
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
 VAR4 = VAR5;
 }
 }
 FUN4(&VAR4[0]);
 free(VAR4);
}
void FUN5()
{
 FUN1();
}
#endif
