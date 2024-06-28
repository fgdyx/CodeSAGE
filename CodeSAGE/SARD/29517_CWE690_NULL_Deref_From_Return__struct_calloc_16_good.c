#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)calloc(1, sizeof(VAR2));
 while(1)
 {
 if (VAR3 != NULL)
 {
 VAR3[0].VAR4 = 1;
 VAR3[0].VAR5 = 1;
 FUN2(&VAR3[0]);
 free(VAR3);
 }
 break;
 }
}
void FUN3()
{
 FUN1();
}
#endif
