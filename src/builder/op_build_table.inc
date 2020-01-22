    if (OpName == "DUMMY") {
    }
    if (OpName == "Abs") {
       ImportNodeOneOut<mlir::ONNXAbsOp>(node, 1, 1, {
      });
    }
    if (OpName == "Acos") {
       ImportNodeOneOut<mlir::ONNXAcosOp>(node, 1, 1, {
      });
    }
    if (OpName == "Acosh") {
       ImportNodeOneOut<mlir::ONNXAcoshOp>(node, 1, 1, {
      });
    }
    if (OpName == "Add") {
       ImportNodeOneOut<mlir::ONNXAddOp>(node, 2, 1, {
      });
    }
    if (OpName == "And") {
       ImportNodeOneOut<mlir::ONNXAndOp>(node, 2, 1, {
      });
    }
    if (OpName == "ArgMax") {
       ImportNodeOneOut<mlir::ONNXArgMaxOp>(node, 1, 1, {
         {"axis","int","0"}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "ArgMin") {
       ImportNodeOneOut<mlir::ONNXArgMinOp>(node, 1, 1, {
         {"axis","int","0"}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "Asin") {
       ImportNodeOneOut<mlir::ONNXAsinOp>(node, 1, 1, {
      });
    }
    if (OpName == "Asinh") {
       ImportNodeOneOut<mlir::ONNXAsinhOp>(node, 1, 1, {
      });
    }
    if (OpName == "Atan") {
       ImportNodeOneOut<mlir::ONNXAtanOp>(node, 1, 1, {
      });
    }
    if (OpName == "Atanh") {
       ImportNodeOneOut<mlir::ONNXAtanhOp>(node, 1, 1, {
      });
    }
    if (OpName == "AveragePool") {
       ImportNodeOneOut<mlir::ONNXAveragePoolOp>(node, 1, 1, {
         {"auto_pad","str","NOTSET"}
        ,{"ceil_mode","int","0"}
        ,{"count_include_pad","int","0"}
        ,{"kernel_shape","ints", ""}
        ,{"pads","", ""}
        ,{"strides","", ""}
      });
    }
    if (OpName == "BatchNormalization") {
       ImportNodeMultipleOuts<mlir::ONNXBatchNormalizationOp>(node, 5, 5, {
         {"epsilon","float","1e-05"}
        ,{"momentum","float","0.9"}
      });
    }
    if (OpName == "BitShift") {
       ImportNodeOneOut<mlir::ONNXBitShiftOp>(node, 2, 1, {
         {"direction","", ""}
      });
    }
    if (OpName == "Cast") {
       ImportNodeOneOut<mlir::ONNXCastOp>(node, 1, 1, {
         {"to","int", "0"}
      });
    }
    if (OpName == "Ceil") {
       ImportNodeOneOut<mlir::ONNXCeilOp>(node, 1, 1, {
      });
    }
    if (OpName == "Clip") {
       ImportNodeOneOut<mlir::ONNXClipOp>(node, 3, 1, {
      });
    }
    if (OpName == "Compress") {
       ImportNodeOneOut<mlir::ONNXCompressOp>(node, 2, 1, {
         {"axis","", ""}
      });
    }
    if (OpName == "Concat") {
       ImportNodeOneOut<mlir::ONNXConcatOp>(node, 1, 1, {
         {"axis","int", "0"}
      });
    }
    if (OpName == "ConcatFromSequence") {
       ImportNodeOneOut<mlir::ONNXConcatFromSequenceOp>(node, 1, 1, {
         {"axis","", ""}
        ,{"new_axis","int","0"}
      });
    }
    if (OpName == "Constant") {
       ImportNodeOneOut<mlir::ONNXConstantOp>(node, 0, 1, {
         {"sparse_value","", ""}
        ,{"value","", ""}
      });
    }
    if (OpName == "ConstantOfShape") {
       ImportNodeOneOut<mlir::ONNXConstantOfShapeOp>(node, 1, 1, {
         {"value","", ""}
      });
    }
    if (OpName == "Conv") {
       ImportNodeConv(node, 1, {
         {"auto_pad","str","NOTSET"}
        ,{"dilations","", ""}
        ,{"group","int", "1"}
        ,{"kernel_shape","", ""}
        ,{"pads","", ""}
        ,{"strides","", ""}
      });
    }
    if (OpName == "ConvInteger") {
       ImportNodeOneOut<mlir::ONNXConvIntegerOp>(node, 4, 1, {
         {"auto_pad","str","NOTSET"}
        ,{"dilations","", ""}
        ,{"group","int","1"}
        ,{"kernel_shape","", ""}
        ,{"pads","", ""}
        ,{"strides","", ""}
      });
    }
    if (OpName == "ConvTranspose") {
       ImportNodeOneOut<mlir::ONNXConvTransposeOp>(node, 3, 1, {
         {"auto_pad","str","NOTSET"}
        ,{"dilations","", ""}
        ,{"group","int","1"}
        ,{"kernel_shape","", ""}
        ,{"output_padding","", ""}
        ,{"output_shape","", ""}
        ,{"pads","", ""}
        ,{"strides","", ""}
      });
    }
    if (OpName == "Cos") {
       ImportNodeOneOut<mlir::ONNXCosOp>(node, 1, 1, {
      });
    }
    if (OpName == "Cosh") {
       ImportNodeOneOut<mlir::ONNXCoshOp>(node, 1, 1, {
      });
    }
    if (OpName == "CumSum") {
       ImportNodeOneOut<mlir::ONNXCumSumOp>(node, 2, 1, {
         {"exclusive","int","0"}
        ,{"reverse","int","0"}
      });
    }
    if (OpName == "DepthToSpace") {
       ImportNodeOneOut<mlir::ONNXDepthToSpaceOp>(node, 1, 1, {
         {"blocksize","", ""}
        ,{"mode","str","DCR"}
      });
    }
    if (OpName == "DequantizeLinear") {
       ImportNodeOneOut<mlir::ONNXDequantizeLinearOp>(node, 3, 1, {
      });
    }
    if (OpName == "Det") {
       ImportNodeOneOut<mlir::ONNXDetOp>(node, 1, 1, {
      });
    }
    if (OpName == "Div") {
       ImportNodeOneOut<mlir::ONNXDivOp>(node, 2, 1, {
      });
    }
    if (OpName == "Dropout") {
       ImportNodeMultipleOuts<mlir::ONNXDropoutOp>(node, 1, 2, {
         {"ratio","float","0.5"}
      });
    }
    if (OpName == "DynamicQuantizeLinear") {
       ImportNodeMultipleOuts<mlir::ONNXDynamicQuantizeLinearOp>(node, 1, 3, {
      });
    }
    if (OpName == "Elu") {
       ImportNodeOneOut<mlir::ONNXEluOp>(node, 1, 1, {
         {"alpha","float","1.0"}
      });
    }
    if (OpName == "Equal") {
       ImportNodeOneOut<mlir::ONNXEqualOp>(node, 2, 1, {
      });
    }
    if (OpName == "Erf") {
       ImportNodeOneOut<mlir::ONNXErfOp>(node, 1, 1, {
      });
    }
    if (OpName == "Exp") {
       ImportNodeOneOut<mlir::ONNXExpOp>(node, 1, 1, {
      });
    }
    if (OpName == "Expand") {
       ImportNodeOneOut<mlir::ONNXExpandOp>(node, 2, 1, {
      });
    }
    if (OpName == "EyeLike") {
       ImportNodeOneOut<mlir::ONNXEyeLikeOp>(node, 1, 1, {
         {"dtype","", ""}
        ,{"k","int","0"}
      });
    }
    if (OpName == "Flatten") {
       ImportNodeOneOut<mlir::ONNXFlattenOp>(node, 1, 1, {
         {"axis","int","1"}
      });
    }
    if (OpName == "Floor") {
       ImportNodeOneOut<mlir::ONNXFloorOp>(node, 1, 1, {
      });
    }
    if (OpName == "GRU") {
       ImportNodeMultipleOuts<mlir::ONNXGRUOp>(node, 6, 2, {
         {"activation_alpha","", ""}
        ,{"activation_beta","", ""}
        ,{"activations","", ""}
        ,{"clip","", ""}
        ,{"direction","str","forward"}
        ,{"hidden_size","", ""}
        ,{"linear_before_reset","int","0"}
      });
    }
    if (OpName == "Gather") {
       ImportNodeOneOut<mlir::ONNXGatherOp>(node, 2, 1, {
         {"axis","int","0"}
      });
    }
    if (OpName == "GatherElements") {
       ImportNodeOneOut<mlir::ONNXGatherElementsOp>(node, 2, 1, {
         {"axis","int","0"}
      });
    }
    if (OpName == "GatherND") {
       ImportNodeOneOut<mlir::ONNXGatherNDOp>(node, 2, 1, {
      });
    }
    if (OpName == "Gemm") {
       ImportNodeOneOut<mlir::ONNXGemmOp>(node, 3, 1, {
         {"alpha","float","1.0"}
        ,{"beta","float","1.0"}
        ,{"transA","int","0"}
        ,{"transB","int","0"}
      });
    }
    if (OpName == "GlobalAveragePool") {
       ImportNodeOneOut<mlir::ONNXGlobalAveragePoolOp>(node, 1, 1, {
      });
    }
    if (OpName == "GlobalLpPool") {
       ImportNodeOneOut<mlir::ONNXGlobalLpPoolOp>(node, 1, 1, {
         {"p","int","2"}
      });
    }
    if (OpName == "GlobalMaxPool") {
       ImportNodeOneOut<mlir::ONNXGlobalMaxPoolOp>(node, 1, 1, {
      });
    }
    if (OpName == "Greater") {
       ImportNodeOneOut<mlir::ONNXGreaterOp>(node, 2, 1, {
      });
    }
    if (OpName == "HardSigmoid") {
       ImportNodeOneOut<mlir::ONNXHardSigmoidOp>(node, 1, 1, {
         {"alpha","float","0.2"}
        ,{"beta","float","0.5"}
      });
    }
    if (OpName == "Hardmax") {
       ImportNodeOneOut<mlir::ONNXHardmaxOp>(node, 1, 1, {
         {"axis","int","1"}
      });
    }
    if (OpName == "Identity") {
       ImportNodeOneOut<mlir::ONNXIdentityOp>(node, 1, 1, {
      });
    }
    if (OpName == "If") {
       ImportNodeOneOut<mlir::ONNXIfOp>(node, 1, 1, {
         {"else_branch","", ""}
        ,{"then_branch","", ""}
      });
    }
    if (OpName == "InstanceNormalization") {
       ImportNodeOneOut<mlir::ONNXInstanceNormalizationOp>(node, 3, 1, {
         {"epsilon","float","1e-05"}
      });
    }
    if (OpName == "IsInf") {
       ImportNodeOneOut<mlir::ONNXIsInfOp>(node, 1, 1, {
         {"detect_negative","int","1"}
        ,{"detect_positive","int","1"}
      });
    }
    if (OpName == "IsNaN") {
       ImportNodeOneOut<mlir::ONNXIsNaNOp>(node, 1, 1, {
      });
    }
    if (OpName == "LRN") {
       ImportNodeOneOut<mlir::ONNXLRNOp>(node, 1, 1, {
         {"alpha","float","0.0001"}
        ,{"beta","float","0.75"}
        ,{"bias","float","1.0"}
        ,{"size","int", ""}
      });
    }
    if (OpName == "LSTM") {
       ImportNodeMultipleOuts<mlir::ONNXLSTMOp>(node, 8, 3, {
         {"activation_alpha","", ""}
        ,{"activation_beta","", ""}
        ,{"activations","", ""}
        ,{"clip","", ""}
        ,{"direction","str","forward"}
        ,{"hidden_size","", ""}
        ,{"input_forget","int","0"}
      });
    }
    if (OpName == "LeakyRelu") {
       ImportNodeOneOut<mlir::ONNXLeakyReluOp>(node, 1, 1, {
         {"alpha","float","0.01"}
      });
    }
    if (OpName == "Less") {
       ImportNodeOneOut<mlir::ONNXLessOp>(node, 2, 1, {
      });
    }
    if (OpName == "Log") {
       ImportNodeOneOut<mlir::ONNXLogOp>(node, 1, 1, {
      });
    }
    if (OpName == "LogSoftmax") {
       ImportNodeOneOut<mlir::ONNXLogSoftmaxOp>(node, 1, 1, {
         {"axis","int","1"}
      });
    }
    if (OpName == "Loop") {
       ImportNodeOneOut<mlir::ONNXLoopOp>(node, 3, 1, {
         {"body","", ""}
      });
    }
    if (OpName == "LpNormalization") {
       ImportNodeOneOut<mlir::ONNXLpNormalizationOp>(node, 1, 1, {
         {"axis","int","-1"}
        ,{"p","int","2"}
      });
    }
    if (OpName == "LpPool") {
       ImportNodeOneOut<mlir::ONNXLpPoolOp>(node, 1, 1, {
         {"auto_pad","str","NOTSET"}
        ,{"kernel_shape","", ""}
        ,{"p","int","2"}
        ,{"pads","", ""}
        ,{"strides","", ""}
      });
    }
    if (OpName == "MatMul") {
       ImportNodeOneOut<mlir::ONNXMatMulOp>(node, 2, 1, {
      });
    }
    if (OpName == "MatMulInteger") {
       ImportNodeOneOut<mlir::ONNXMatMulIntegerOp>(node, 4, 1, {
      });
    }
    if (OpName == "Max") {
       ImportNodeOneOut<mlir::ONNXMaxOp>(node, 1, 1, {
      });
    }
    if (OpName == "MaxPool") {
       ImportNodeMaxPool(node, 1, {
         {"auto_pad","str","NOTSET"}
        ,{"ceil_mode","int","0"}
        ,{"dilations","", ""}
        ,{"kernel_shape","ints", ""}
        ,{"pads","", ""}
        ,{"storage_order","int","0"}
        ,{"strides","", ""}
      });
    }
    if (OpName == "MaxRoiPool") {
       ImportNodeOneOut<mlir::ONNXMaxRoiPoolOp>(node, 2, 1, {
         {"pooled_shape","", ""}
        ,{"spatial_scale","float","1.0"}
      });
    }
    if (OpName == "MaxUnpool") {
       ImportNodeOneOut<mlir::ONNXMaxUnpoolOp>(node, 3, 1, {
         {"kernel_shape","", ""}
        ,{"pads","", ""}
        ,{"strides","", ""}
      });
    }
    if (OpName == "Mean") {
       ImportNodeOneOut<mlir::ONNXMeanOp>(node, 1, 1, {
      });
    }
    if (OpName == "MeanVarianceNormalization") {
       ImportNodeOneOut<mlir::ONNXMeanVarianceNormalizationOp>(node, 1, 1, {
         {"axes","ints","{'0', '2', '3'}"}
      });
    }
    if (OpName == "Min") {
       ImportNodeOneOut<mlir::ONNXMinOp>(node, 1, 1, {
      });
    }
    if (OpName == "Mod") {
       ImportNodeOneOut<mlir::ONNXModOp>(node, 2, 1, {
         {"fmod","int","0"}
      });
    }
    if (OpName == "Mul") {
       ImportNodeOneOut<mlir::ONNXMulOp>(node, 2, 1, {
      });
    }
    if (OpName == "Multinomial") {
       ImportNodeOneOut<mlir::ONNXMultinomialOp>(node, 1, 1, {
         {"dtype","int","6"}
        ,{"sample_size","int","1"}
        ,{"seed","", ""}
      });
    }
    if (OpName == "Neg") {
       ImportNodeOneOut<mlir::ONNXNegOp>(node, 1, 1, {
      });
    }
    if (OpName == "NonMaxSuppression") {
       ImportNodeOneOut<mlir::ONNXNonMaxSuppressionOp>(node, 5, 1, {
         {"center_point_box","int","0"}
      });
    }
    if (OpName == "NonZero") {
       ImportNodeOneOut<mlir::ONNXNonZeroOp>(node, 1, 1, {
      });
    }
    if (OpName == "Not") {
       ImportNodeOneOut<mlir::ONNXNotOp>(node, 1, 1, {
      });
    }
    if (OpName == "OneHot") {
       ImportNodeOneOut<mlir::ONNXOneHotOp>(node, 3, 1, {
         {"axis","int","-1"}
      });
    }
    if (OpName == "Or") {
       ImportNodeOneOut<mlir::ONNXOrOp>(node, 2, 1, {
      });
    }
    if (OpName == "PRelu") {
       ImportNodeOneOut<mlir::ONNXPReluOp>(node, 2, 1, {
      });
    }
    if (OpName == "Pad") {
       ImportNodeOneOut<mlir::ONNXPadOp>(node, 3, 1, {
         {"mode","str","constant"}
      });
    }
    if (OpName == "Pow") {
       ImportNodeOneOut<mlir::ONNXPowOp>(node, 2, 1, {
      });
    }
    if (OpName == "QLinearConv") {
       ImportNodeOneOut<mlir::ONNXQLinearConvOp>(node, 9, 1, {
         {"auto_pad","str","NOTSET"}
        ,{"dilations","", ""}
        ,{"group","int","1"}
        ,{"kernel_shape","", ""}
        ,{"pads","", ""}
        ,{"strides","", ""}
      });
    }
    if (OpName == "QLinearMatMul") {
       ImportNodeOneOut<mlir::ONNXQLinearMatMulOp>(node, 8, 1, {
      });
    }
    if (OpName == "QuantizeLinear") {
       ImportNodeOneOut<mlir::ONNXQuantizeLinearOp>(node, 3, 1, {
      });
    }
    if (OpName == "RNN") {
       ImportNodeMultipleOuts<mlir::ONNXRNNOp>(node, 6, 2, {
         {"activation_alpha","floats", "{}"}
        ,{"activation_beta","floats", "{}"}
        ,{"activations","", "{Tannh, Tanh}"}
        ,{"clip","", ""}
        ,{"direction","str","forward"}
        ,{"hidden_size","", ""}
      });
    }
    if (OpName == "RandomNormal") {
       ImportNodeOneOut<mlir::ONNXRandomNormalOp>(node, 0, 1, {
         {"dtype","int","1"}
        ,{"mean","float","0.0"}
        ,{"scale","float","1.0"}
        ,{"seed","", ""}
        ,{"shape","", ""}
      });
    }
    if (OpName == "RandomNormalLike") {
       ImportNodeOneOut<mlir::ONNXRandomNormalLikeOp>(node, 1, 1, {
         {"dtype","", ""}
        ,{"mean","float","0.0"}
        ,{"scale","float","1.0"}
        ,{"seed","", ""}
      });
    }
    if (OpName == "RandomUniform") {
       ImportNodeOneOut<mlir::ONNXRandomUniformOp>(node, 0, 1, {
         {"dtype","int","1"}
        ,{"high","float","1.0"}
        ,{"low","float","0.0"}
        ,{"seed","", ""}
        ,{"shape","", ""}
      });
    }
    if (OpName == "RandomUniformLike") {
       ImportNodeOneOut<mlir::ONNXRandomUniformLikeOp>(node, 1, 1, {
         {"dtype","", ""}
        ,{"high","float","1.0"}
        ,{"low","float","0.0"}
        ,{"seed","", ""}
      });
    }
    if (OpName == "Range") {
       ImportNodeOneOut<mlir::ONNXRangeOp>(node, 3, 1, {
      });
    }
    if (OpName == "Reciprocal") {
       ImportNodeOneOut<mlir::ONNXReciprocalOp>(node, 1, 1, {
      });
    }
    if (OpName == "ReduceL1") {
       ImportNodeOneOut<mlir::ONNXReduceL1Op>(node, 1, 1, {
         {"axes","", ""}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "ReduceL2") {
       ImportNodeOneOut<mlir::ONNXReduceL2Op>(node, 1, 1, {
         {"axes","", ""}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "ReduceLogSum") {
       ImportNodeOneOut<mlir::ONNXReduceLogSumOp>(node, 1, 1, {
         {"axes","", ""}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "ReduceLogSumExp") {
       ImportNodeOneOut<mlir::ONNXReduceLogSumExpOp>(node, 1, 1, {
         {"axes","", ""}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "ReduceMax") {
       ImportNodeOneOut<mlir::ONNXReduceMaxOp>(node, 1, 1, {
         {"axes","", ""}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "ReduceMean") {
       ImportNodeOneOut<mlir::ONNXReduceMeanOp>(node, 1, 1, {
         {"axes","", ""}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "ReduceMin") {
       ImportNodeOneOut<mlir::ONNXReduceMinOp>(node, 1, 1, {
         {"axes","", ""}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "ReduceProd") {
       ImportNodeOneOut<mlir::ONNXReduceProdOp>(node, 1, 1, {
         {"axes","", ""}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "ReduceSum") {
       ImportNodeOneOut<mlir::ONNXReduceSumOp>(node, 1, 1, {
         {"axes","", ""}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "ReduceSumSquare") {
       ImportNodeOneOut<mlir::ONNXReduceSumSquareOp>(node, 1, 1, {
         {"axes","", ""}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "Relu") {
       ImportNodeOneOut<mlir::ONNXReluOp>(node, 1, 1, {
      });
    }
    if (OpName == "Reshape") {
       ImportNodeOneOut<mlir::ONNXReshapeOp>(node, 2, 1, {
      });
    }
    if (OpName == "Resize") {
       ImportNodeOneOut<mlir::ONNXResizeOp>(node, 4, 1, {
         {"coordinate_transformation_mode","str","half_pixel"}
        ,{"cubic_coeff_a","float","-0.75"}
        ,{"exclude_outside","int","0"}
        ,{"extrapolation_value","float","0.0"}
        ,{"mode","str","nearest"}
        ,{"nearest_mode","str","round_prefer_floor"}
      });
    }
    if (OpName == "ReverseSequence") {
       ImportNodeOneOut<mlir::ONNXReverseSequenceOp>(node, 2, 1, {
         {"batch_axis","int","1"}
        ,{"time_axis","int","0"}
      });
    }
    if (OpName == "RoiAlign") {
       ImportNodeOneOut<mlir::ONNXRoiAlignOp>(node, 3, 1, {
         {"mode","str","avg"}
        ,{"output_height","int","1"}
        ,{"output_width","int","1"}
        ,{"sampling_ratio","int","0"}
        ,{"spatial_scale","float","1.0"}
      });
    }
    if (OpName == "Round") {
       ImportNodeOneOut<mlir::ONNXRoundOp>(node, 1, 1, {
      });
    }
    if (OpName == "Scan") {
       ImportNodeOneOut<mlir::ONNXScanOp>(node, 1, 1, {
         {"body","", ""}
        ,{"num_scan_inputs","", ""}
        ,{"scan_input_axes","", ""}
        ,{"scan_input_directions","", ""}
        ,{"scan_output_axes","", ""}
        ,{"scan_output_directions","", ""}
      });
    }
    if (OpName == "Scatter") {
       ImportNodeOneOut<mlir::ONNXScatterOp>(node, 3, 1, {
         {"axis","int","0"}
      });
    }
    if (OpName == "ScatterElements") {
       ImportNodeOneOut<mlir::ONNXScatterElementsOp>(node, 3, 1, {
         {"axis","int","0"}
      });
    }
    if (OpName == "ScatterND") {
       ImportNodeOneOut<mlir::ONNXScatterNDOp>(node, 3, 1, {
      });
    }
    if (OpName == "Selu") {
       ImportNodeOneOut<mlir::ONNXSeluOp>(node, 1, 1, {
         {"alpha","float","1.67326"}
        ,{"gamma","float","1.0507"}
      });
    }
    if (OpName == "SequenceAt") {
       ImportNodeOneOut<mlir::ONNXSequenceAtOp>(node, 2, 1, {
      });
    }
    if (OpName == "SequenceConstruct") {
       ImportNodeOneOut<mlir::ONNXSequenceConstructOp>(node, 1, 1, {
      });
    }
    if (OpName == "SequenceEmpty") {
       ImportNodeOneOut<mlir::ONNXSequenceEmptyOp>(node, 0, 1, {
         {"dtype","", ""}
      });
    }
    if (OpName == "SequenceErase") {
       ImportNodeOneOut<mlir::ONNXSequenceEraseOp>(node, 2, 1, {
      });
    }
    if (OpName == "SequenceInsert") {
       ImportNodeOneOut<mlir::ONNXSequenceInsertOp>(node, 3, 1, {
      });
    }
    if (OpName == "SequenceLength") {
       ImportNodeOneOut<mlir::ONNXSequenceLengthOp>(node, 1, 1, {
      });
    }
    if (OpName == "Shape") {
       ImportNodeOneOut<mlir::ONNXShapeOp>(node, 1, 1, {
      });
    }
    if (OpName == "Shrink") {
       ImportNodeOneOut<mlir::ONNXShrinkOp>(node, 1, 1, {
         {"bias","float","0.0"}
        ,{"lambd","float","0.5"}
      });
    }
    if (OpName == "Sigmoid") {
       ImportNodeOneOut<mlir::ONNXSigmoidOp>(node, 1, 1, {
      });
    }
    if (OpName == "Sign") {
       ImportNodeOneOut<mlir::ONNXSignOp>(node, 1, 1, {
      });
    }
    if (OpName == "Sin") {
       ImportNodeOneOut<mlir::ONNXSinOp>(node, 1, 1, {
      });
    }
    if (OpName == "Sinh") {
       ImportNodeOneOut<mlir::ONNXSinhOp>(node, 1, 1, {
      });
    }
    if (OpName == "Size") {
       ImportNodeOneOut<mlir::ONNXSizeOp>(node, 1, 1, {
      });
    }
    if (OpName == "Slice") {
       ImportNodeOneOut<mlir::ONNXSliceOp>(node, 5, 1, {
      });
    }
    if (OpName == "Softmax") {
       ImportNodeOneOut<mlir::ONNXSoftmaxOp>(node, 1, 1, {
         {"axis","int","1"}
      });
    }
    if (OpName == "Softplus") {
       ImportNodeOneOut<mlir::ONNXSoftplusOp>(node, 1, 1, {
      });
    }
    if (OpName == "Softsign") {
       ImportNodeOneOut<mlir::ONNXSoftsignOp>(node, 1, 1, {
      });
    }
    if (OpName == "SpaceToDepth") {
       ImportNodeOneOut<mlir::ONNXSpaceToDepthOp>(node, 1, 1, {
         {"blocksize","", ""}
      });
    }
    if (OpName == "Split") {
       ImportNodeOneOut<mlir::ONNXSplitOp>(node, 1, 1, {
         {"axis","int","0"}
        ,{"split","", ""}
      });
    }
    if (OpName == "SplitToSequence") {
       ImportNodeOneOut<mlir::ONNXSplitToSequenceOp>(node, 2, 1, {
         {"axis","int","0"}
        ,{"keepdims","int","1"}
      });
    }
    if (OpName == "Sqrt") {
       ImportNodeOneOut<mlir::ONNXSqrtOp>(node, 1, 1, {
      });
    }
    if (OpName == "Squeeze") {
       ImportNodeOneOut<mlir::ONNXSqueezeOp>(node, 1, 1, {
         {"axes","", ""}
      });
    }
    if (OpName == "StringNormalizer") {
       ImportNodeOneOut<mlir::ONNXStringNormalizerOp>(node, 1, 1, {
         {"case_change_action","str","NONE"}
        ,{"is_case_sensitive","int","0"}
        ,{"locale","", ""}
        ,{"stopwords","", ""}
      });
    }
    if (OpName == "Sub") {
       ImportNodeOneOut<mlir::ONNXSubOp>(node, 2, 1, {
      });
    }
    if (OpName == "Sum") {
       ImportNodeOneOut<mlir::ONNXSumOp>(node, 1, 1, {
      });
    }
    if (OpName == "Tan") {
       ImportNodeOneOut<mlir::ONNXTanOp>(node, 1, 1, {
      });
    }
    if (OpName == "Tanh") {
       ImportNodeOneOut<mlir::ONNXTanhOp>(node, 1, 1, {
      });
    }
    if (OpName == "TfIdfVectorizer") {
       ImportNodeOneOut<mlir::ONNXTfIdfVectorizerOp>(node, 1, 1, {
         {"max_gram_length","", ""}
        ,{"max_skip_count","", ""}
        ,{"min_gram_length","", ""}
        ,{"mode","", ""}
        ,{"ngram_counts","", ""}
        ,{"ngram_indexes","", ""}
        ,{"pool_int64s","", ""}
        ,{"pool_strings","", ""}
        ,{"weights","", ""}
      });
    }
    if (OpName == "ThresholdedRelu") {
       ImportNodeOneOut<mlir::ONNXThresholdedReluOp>(node, 1, 1, {
         {"alpha","float","1.0"}
      });
    }
    if (OpName == "Tile") {
       ImportNodeOneOut<mlir::ONNXTileOp>(node, 2, 1, {
      });
    }
    if (OpName == "TopK") {
       ImportNodeMultipleOuts<mlir::ONNXTopKOp>(node, 2, 2, {
         {"axis","int","-1"}
        ,{"largest","int","1"}
        ,{"sorted","int","1"}
      });
    }
    if (OpName == "Transpose") {
       ImportNodeOneOut<mlir::ONNXTransposeOp>(node, 1, 1, {
         {"perm","", ""}
      });
    }
    if (OpName == "Unique") {
       ImportNodeMultipleOuts<mlir::ONNXUniqueOp>(node, 1, 4, {
         {"axis","", ""}
        ,{"sorted","int","1"}
      });
    }
    if (OpName == "Unsqueeze") {
       ImportNodeOneOut<mlir::ONNXUnsqueezeOp>(node, 1, 1, {
         {"axes","ints", ""}
      });
    }
    if (OpName == "Upsample") {
       ImportNodeOneOut<mlir::ONNXUpsampleOp>(node, 2, 1, {
         {"mode","str","nearest"}
      });
    }
    if (OpName == "Where") {
       ImportNodeOneOut<mlir::ONNXWhereOp>(node, 3, 1, {
      });
    }
    if (OpName == "Xor") {
       ImportNodeOneOut<mlir::ONNXXorOp>(node, 2, 1, {
      });
    }