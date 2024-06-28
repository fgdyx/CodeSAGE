#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR4 = (VAR3 *)malloc(1*sizeof(VAR3));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 if (VAR4 != NULL)
 {
 VAR4[0].VAR5 = 1;
 VAR4[0].VAR6 = 1;
 FUN2(&VAR4[0]);
 free(VAR4);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
