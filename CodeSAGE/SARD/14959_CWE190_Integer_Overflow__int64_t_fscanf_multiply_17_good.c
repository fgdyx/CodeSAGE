#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 int64_t VAR4;
 VAR4 = 0LL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 fscanf (stdin, "", &VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 if(VAR4 > 0)
 {
 if (VAR4 < (VAR5/2))
 {
 int64_t VAR6 = VAR4 * 2;
 FUN2(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 int VAR7,VAR8;
 int64_t VAR4;
 VAR4 = 0LL;
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 VAR4 = 2;
 }
 for(VAR8 = 0; VAR8 < 1; VAR8++)
 {
 if(VAR4 > 0)
 {
 int64_t VAR6 = VAR4 * 2;
 FUN2(VAR6);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
