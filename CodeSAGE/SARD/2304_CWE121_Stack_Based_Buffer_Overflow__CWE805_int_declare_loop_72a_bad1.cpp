#ifndef VAR1
void FUN1(VAR2<int *> VAR3);
void FUN2()
{
 int * VAR4;
 VAR2<int *> VAR3;
 int VAR5[50];
 int VAR6[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR4 = VAR5;
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN1(VAR3);
}
#endif
