# Observer Pattern

The observer pattern is a way for an object (called a subject) to maintain a list
of its subscribers (called observers) and notifys them of state changes, typically
by calling one of their methods.

The observer pattern is typically used to implement distributed event handling systems,
where as many languages today implement the observer pattern underneath to create their
built in "event systems".

In this example, we look at a person betting on a horse race.

Jack bets on a horse race, becoming an observer of the race (the subject).

When the horse race concludes (in this case, we just read in the winner from a text file),
we notify Jack if he won, or if he lost.
