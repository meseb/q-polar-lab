## QUAL definition

QUAL = 16 discrete states derived from a continuous signal.

Equivalent:
- 1 QUAL ≈ 4 bits
- 2 QUAL ≈ 1 byte

## Signal model

Signal S(t) is divided into N windows:

QUAL = floor(normalized(S) * 16)

## Extensions

Q-FRAME = multi-dimensional vector:

- amplitude
- polarity
- frequency
- phase

## Key hypothesis

Analog signals, if stabilized and remodulated,
can support higher density symbolic encoding
than binary thresholds.

## Constraints

- noise
- ADC resolution
- thermal drift
- signal distortion
