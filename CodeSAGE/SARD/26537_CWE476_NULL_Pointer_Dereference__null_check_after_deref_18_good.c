#ifndef VAR1
static void FUN1()
{
 goto VAR2;
VAR2:
 {
 int *VAR3 = NULL;
 VAR3 = (int *)malloc(sizeof(int));
 *VAR3 = 5;
 FUN2(*VAR3);
 *VAR3 = 10;
 FUN2(*VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
