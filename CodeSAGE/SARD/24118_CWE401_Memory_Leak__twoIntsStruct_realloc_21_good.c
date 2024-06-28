#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(VAR5 * VAR6)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 free(VAR6);
 }
}
static void FUN3()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = (VAR5 *)realloc(VAR6, 100*sizeof(VAR5));
 VAR6[0].VAR7 = 0;
 VAR6[0].VAR8 = 0;
 FUN4(&VAR6[0]);
 VAR2 = 0;
 FUN1(VAR6);
}
static void FUN5(VAR5 * VAR6)
{
 if(VAR3)
 {
 free(VAR6);
 }
}
static void FUN6()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = (VAR5 *)realloc(VAR6, 100*sizeof(VAR5));
 VAR6[0].VAR7 = 0;
 VAR6[0].VAR8 = 0;
 FUN4(&VAR6[0]);
 VAR3 = 1;
 FUN5(VAR6);
}
static void FUN7(VAR5 * VAR6)
{
 if(VAR4)
 {
 ;
 }
}
static void FUN8()
{
 VAR5 * VAR6;
 VAR6 = NULL;
 VAR6 = (VAR5 *)FUN9(100*sizeof(VAR5));
 VAR6[0].VAR7 = 0;
 VAR6[0].VAR8 = 0;
 FUN4(&VAR6[0]);
 VAR4 = 1;
 FUN7(VAR6);
}
void FUN10()
{
 FUN3();
 FUN6();
 FUN8();
}
#endif
