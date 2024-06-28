#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 int64_t VAR6[50];
 int64_t VAR7[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR5 = VAR6;
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 FUN1(VAR4);
}
#endif
