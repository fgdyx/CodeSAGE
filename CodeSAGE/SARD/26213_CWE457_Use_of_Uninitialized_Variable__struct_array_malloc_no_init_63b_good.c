#ifndef VAR1
void FUN1(VAR2 * * VAR3)
{
 VAR2 * VAR4 = *VAR3;
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR4[VAR5].VAR6);
 FUN2(VAR4[VAR5].VAR7);
 }
 }
}
void FUN3(VAR2 * * VAR3)
{
 VAR2 * VAR4 = *VAR3;
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR4[VAR5].VAR6 = VAR5;
 VAR4[VAR5].VAR7 = VAR5;
 }
 }
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR4[VAR5].VAR6);
 FUN2(VAR4[VAR5].VAR7);
 }
 }
}
#endif
