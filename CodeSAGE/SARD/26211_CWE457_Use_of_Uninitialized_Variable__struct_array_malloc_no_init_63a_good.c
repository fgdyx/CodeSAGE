#ifndef VAR1
void FUN1(VAR2 * * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)malloc(10*sizeof(VAR2));
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 }
 FUN1(&VAR3);
}
void FUN3(VAR2 * * VAR3);
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)malloc(10*sizeof(VAR2));
 ;
 FUN3(&VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
